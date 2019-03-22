struct MpegEncContext { int *q_intra_matrix, *q_chroma_intra_matrix; };
void dnxhd_10bit_dct_quantize(MpegEncContext *ctx, int n, int qscale) {
  const int *qmat = n < 4;
  const int *rmat = n < 4 ?                        ctx->q_intra_matrix :                       ctx->q_chroma_intra_matrix;
}