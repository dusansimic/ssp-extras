int compare_float(const void* a, const void* b) {
	float r = *((float*) a) - *((float*) b);
	if (r < 0.0) return -1;
	if (r > 0.0) return 1;
	return 0;
}
