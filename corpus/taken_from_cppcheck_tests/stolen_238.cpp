void removed_cb (GList *uids) {
for (; uids; uids = uids->next) {
}
}
void opened_cb () {
	g_signal_connect (G_CALLBACK (removed_cb));
}