
typedef struct __asl_object_s* asl_object_sRef;

typedef struct shared_ptr<const std::__1::vector<__weak id, std::__1::allocator<__weak id> > > {
	vector<__weak id, std::__1::allocator<__weak id> > __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<const std::__1::vector<__weak id, std::__1::allocator<__weak id> > >;

typedef struct opaque_pthread_mutex_t {
	long __sig;
	char __opaque[40];
} opaque_pthread_mutex_t;

typedef struct Mutex {
	opaque_pthread_mutex_t _m;
} Mutex;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct {
	CGSize field1;
	int field2;
	long long field3;
	char field4;
	char field5;
	char field6;
} SCD_Struct_IG5;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	int field1;
	void field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
} SCD_Struct_IG7;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFString* CFStringRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct __CTFrame* CTFrameRef;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGPath* CGPathRef;

typedef struct CGContext* CGContextRef;

typedef struct __CTRunDelegate* CTRunDelegateRef;

typedef struct CGImage* CGImageRef;

typedef struct __CVOpenGLESTextureCache* CVOpenGLESTextureCacheRef;

typedef struct {
	float m00;
	float m01;
	float m02;
	float m03;
	float m10;
	float m11;
	float m12;
	float m13;
	float m20;
	float m21;
	float m22;
	float m23;
	float m30;
	float m31;
	float m32;
	float m33;
} SCD_Struct_IG21;

typedef union GLKMatrix4 {
	SCD_Struct_IG21 field1;
	float m[16];
} GLKMatrix4;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_IG24;

typedef union GLKVector3 {
	SCD_Struct_IG24 field1;
	SCD_Struct_IG24 field2;
	SCD_Struct_IG24 field3;
	float v[3];
} GLKVector3;

typedef union GLKVector2 {
	CGSize field1;
	CGSize field2;
	float v[2];
} GLKVector2;

typedef struct IGDKStats {
	double milliseconds;
	int fromCount;
	int toCount;
} IGDKStats;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> > {
	unsigned long __first_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> >;

typedef struct _compressed_pair<unsigned long, _IGListWorkingRangeHandlerIndexPathHash> {
	unsigned long __first_;
} compressed_pair<unsigned long, _IGListWorkingRangeHandlerIndexPathHash>;

typedef struct _compressed_pair<float, std::__1::equal_to<_IGListWorkingRangeHandlerIndexPath> > {
	float __first_;
} compressed_pair<float, std::__1::equal_to<_IGListWorkingRangeHandlerIndexPath> >;

typedef struct _hash_node_base<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> {
	__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> __next_;
} hash_node_base<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *>, std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> > > {
	hash_node_base<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> __first_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *>, std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> > > {
	__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> __first_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> > __second_;
} compressed_pair<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> > > {
	compressed_pair<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> > >;

typedef struct _hash_table<_IGListWorkingRangeHandlerIndexPath, _IGListWorkingRangeHandlerIndexPathHash, std::__1::equal_to<_IGListWorkingRangeHandlerIndexPath>, std::__1::allocator<_IGListWorkingRangeHandlerIndexPath> > {
	unique_ptr<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *>, std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> > > __p1_;
	compressed_pair<unsigned long, _IGListWorkingRangeHandlerIndexPathHash> __p2_;
	compressed_pair<float, std::__1::equal_to<_IGListWorkingRangeHandlerIndexPath> > __p3_;
} hash_table<_IGListWorkingRangeHandlerIndexPath, _IGListWorkingRangeHandlerIndexPathHash, std::__1::equal_to<_IGListWorkingRangeHandlerIndexPath>, std::__1::allocator<_IGListWorkingRangeHandlerIndexPath> >;

typedef struct unordered_set<_IGListWorkingRangeHandlerIndexPath, _IGListWorkingRangeHandlerIndexPathHash, std::__1::equal_to<_IGListWorkingRangeHandlerIndexPath>, std::__1::allocator<_IGListWorkingRangeHandlerIndexPath> > {
	hash_table<_IGListWorkingRangeHandlerIndexPath, _IGListWorkingRangeHandlerIndexPathHash, std::__1::equal_to<_IGListWorkingRangeHandlerIndexPath>, std::__1::allocator<_IGListWorkingRangeHandlerIndexPath> > __table_;
} unordered_set<_IGListWorkingRangeHandlerIndexPath, _IGListWorkingRangeHandlerIndexPathHash, std::__1::equal_to<_IGListWorkingRangeHandlerIndexPath>, std::__1::allocator<_IGListWorkingRangeHandlerIndexPath> >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> *> > {
	unsigned long __first_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> *> >;

typedef struct _compressed_pair<unsigned long, _IGListWorkingRangeHashID> {
	unsigned long __first_;
} compressed_pair<unsigned long, _IGListWorkingRangeHashID>;

typedef struct _compressed_pair<float, std::__1::equal_to<_IGListWorkingRangeHandlerItemControllerWrapper> > {
	float __first_;
} compressed_pair<float, std::__1::equal_to<_IGListWorkingRangeHandlerItemControllerWrapper> >;

typedef struct _hash_node_base<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> *> {
	__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> __next_;
} hash_node_base<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> *>, std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> > > {
	hash_node_base<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> *> __first_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> *>, std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> *> > > {
	__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> __first_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> *> > __second_;
} compressed_pair<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> *> > > {
	compressed_pair<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> *> > >;

typedef struct _hash_table<_IGListWorkingRangeHandlerItemControllerWrapper, _IGListWorkingRangeHashID, std::__1::equal_to<_IGListWorkingRangeHandlerItemControllerWrapper>, std::__1::allocator<_IGListWorkingRangeHandlerItemControllerWrapper> > {
	unique_ptr<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> *>, std::__1::allocator<std::__1::__hash_node<_IGListWorkingRangeHandlerItemControllerWrapper, void *> > > __p1_;
	compressed_pair<unsigned long, _IGListWorkingRangeHashID> __p2_;
	compressed_pair<float, std::__1::equal_to<_IGListWorkingRangeHandlerItemControllerWrapper> > __p3_;
} hash_table<_IGListWorkingRangeHandlerItemControllerWrapper, _IGListWorkingRangeHashID, std::__1::equal_to<_IGListWorkingRangeHandlerItemControllerWrapper>, std::__1::allocator<_IGListWorkingRangeHandlerItemControllerWrapper> >;

typedef struct unordered_set<_IGListWorkingRangeHandlerItemControllerWrapper, _IGListWorkingRangeHashID, std::__1::equal_to<_IGListWorkingRangeHandlerItemControllerWrapper>, std::__1::allocator<_IGListWorkingRangeHandlerItemControllerWrapper> > {
	hash_table<_IGListWorkingRangeHandlerItemControllerWrapper, _IGListWorkingRangeHashID, std::__1::equal_to<_IGListWorkingRangeHandlerItemControllerWrapper>, std::__1::allocator<_IGListWorkingRangeHandlerItemControllerWrapper> > __table_;
} unordered_set<_IGListWorkingRangeHandlerItemControllerWrapper, _IGListWorkingRangeHashID, std::__1::equal_to<_IGListWorkingRangeHandlerItemControllerWrapper>, std::__1::allocator<_IGListWorkingRangeHandlerItemControllerWrapper> >;

typedef struct {
	double timeout;
	double maximumAge;
	double accuracy;
	double distanceFilter;
} SCD_Struct_RC48;

typedef struct __CFHTTPMessage* CFHTTPMessageRef;

typedef struct {
	char field1;
	unsigned char field2;
	char field3;
	unsigned long long field4;
} SCD_Struct_RC50;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGColor* CGColorRef;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_RC53;

typedef struct {
	SCD_Struct_RC53 field1;
	SCD_Struct_RC53 field2;
} SCD_Struct_RC54;

typedef struct OpaqueJSContext* OpaqueJSContextRef;

typedef struct OpaqueJSString* OpaqueJSStringRef;

typedef struct _compressed_pair<ModuleData *, std::__1::default_delete<ModuleData []> > {
	ModuleData __first_;
} compressed_pair<ModuleData *, std::__1::default_delete<ModuleData []> >;

typedef struct unique_ptr<ModuleData [], std::__1::default_delete<ModuleData []> > {
	compressed_pair<ModuleData *, std::__1::default_delete<ModuleData []> > __ptr_;
} unique_ptr<ModuleData [], std::__1::default_delete<ModuleData []> >;

typedef struct _compressed_pair<__sFILE *, int (*)(__sFILE *)> {
	__sFILE __first_;
	/*function pointer*/void* __second_;
} compressed_pair<__sFILE *, int (*)(__sFILE *)>;

typedef struct unique_ptr<__sFILE, int (*)(__sFILE *)> {
	compressed_pair<__sFILE *, int (*)(__sFILE *)> __ptr_;
} unique_ptr<__sFILE, int (*)(__sFILE *)>;

typedef struct RandomAccessBundleData {
	unique_ptr<__sFILE, int (*)(__sFILE *)> bundle;
	unsigned baseOffset;
	unsigned numTableEntries;
	unique_ptr<ModuleData [], std::__1::default_delete<ModuleData []> > table;
} RandomAccessBundleData;

typedef struct OpaqueJSValue* OpaqueJSValueRef;

typedef struct {
	CGColor field1;
	CGColor field2;
	CGColor field3;
	CGColor field4;
} SCD_Struct_RC63;

typedef struct {
	double fieldOfView;
	double aspectRatio;
	double gyroDelay;
	double shutterSpeed;
	char gyroOrientation[3];
} SCD_Struct_IG64;

typedef struct OpaqueCMClock* OpaqueCMClockRef;

typedef struct circular_buffer<IGGyroSample, std::__1::allocator<IGGyroSample> > {
	IGGyroSample m_buff;
	IGGyroSample m_end;
	IGGyroSample m_first;
	IGGyroSample m_last;
	unsigned m_size;
	allocator<IGGyroSample> m_alloc;
} circular_buffer<IGGyroSample, std::__1::allocator<IGGyroSample> >;

typedef struct _compressed_pair<IGGyroSample *, std::__1::allocator<IGGyroSample> > {
	IGGyroSample __first_;
} compressed_pair<IGGyroSample *, std::__1::allocator<IGGyroSample> >;

typedef struct vector<IGGyroSample, std::__1::allocator<IGGyroSample> > {
	IGGyroSample __begin_;
	IGGyroSample __end_;
	compressed_pair<IGGyroSample *, std::__1::allocator<IGGyroSample> > __end_cap_;
} vector<IGGyroSample, std::__1::allocator<IGGyroSample> >;

typedef struct _compressed_pair<IGFrameSample *, std::__1::allocator<IGFrameSample> > {
	IGFrameSample __first_;
} compressed_pair<IGFrameSample *, std::__1::allocator<IGFrameSample> >;

typedef struct vector<IGFrameSample, std::__1::allocator<IGFrameSample> > {
	IGFrameSample __begin_;
	IGFrameSample __end_;
	compressed_pair<IGFrameSample *, std::__1::allocator<IGFrameSample> > __end_cap_;
} vector<IGFrameSample, std::__1::allocator<IGFrameSample> >;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct _compressed_pair<IGOrientationSample *, std::__1::allocator<IGOrientationSample> > {
	IGOrientationSample __first_;
} compressed_pair<IGOrientationSample *, std::__1::allocator<IGOrientationSample> >;

typedef struct vector<IGOrientationSample, std::__1::allocator<IGOrientationSample> > {
	IGOrientationSample __begin_;
	IGOrientationSample __end_;
	compressed_pair<IGOrientationSample *, std::__1::allocator<IGOrientationSample> > __end_cap_;
} vector<IGOrientationSample, std::__1::allocator<IGOrientationSample> >;

typedef struct _compressed_pair<boost::qvm::quat<double> *, std::__1::allocator<boost::qvm::quat<double> > > {
	quat<double> __first_;
} compressed_pair<boost::qvm::quat<double> *, std::__1::allocator<boost::qvm::quat<double> > >;

typedef struct vector<boost::qvm::quat<double>, std::__1::allocator<boost::qvm::quat<double> > > {
	quat<double> __begin_;
	quat<double> __end_;
	compressed_pair<boost::qvm::quat<double> *, std::__1::allocator<boost::qvm::quat<double> > > __end_cap_;
} vector<boost::qvm::quat<double>, std::__1::allocator<boost::qvm::quat<double> > >;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_IG76;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_IG77;

typedef struct {
	SCD_Struct_IG77 start;
	SCD_Struct_IG77 duration;
} SCD_Struct_IG78;

typedef struct __CFRunLoopObserver* CFRunLoopObserverRef;

typedef struct atomic<double> {
	Ad __a_;
} atomic<double>;

typedef struct atomic<signed char> {
	Ac __a_;
} atomic<signed char>;

typedef struct mutex {
	opaque_pthread_mutex_t __m_;
} mutex;

typedef struct FBAnimationPerformanceTrackerConfig {
	int smallDropEventFrameNumber;
	int largeDropEventFrameNumber;
	int maxFrameDropAccount;
	char reportStackTraces;
} FBAnimationPerformanceTrackerConfig;

typedef struct {
	unsigned long field1;
	id field2;
	unsigned long field3;
	unsigned long field4[5];
} SCD_Struct_JK84;

typedef struct {
	unsigned _exponent : 8;
	unsigned _length : 4;
	unsigned _isNegative : 1;
	unsigned _isCompact : 1;
	unsigned _reserved : 18;
	unsigned short _mantissa[8];
} SCD_Struct_CP85;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct CGFunction* CGFunctionRef;

typedef struct CGShading* CGShadingRef;

typedef struct CPTEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} CPTEdgeInsets;

typedef struct CPTImageSlices {
	CGImage slice[9];
} CPTImageSlices;

typedef struct CPTNumericDataType {
	int dataTypeFormat;
	unsigned sampleBytes;
	int byteOrder;
} CPTNumericDataType;

typedef struct NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct CGLayer* CGLayerRef;

typedef struct __SecRandom* SecRandomRef;

typedef struct {
	int field1;
	int field2;
	int field3;
} SCD_Struct_FB95;

typedef struct {
	id field1;
	id field2;
	/*function pointer*/void* field3;
	id field4;
	/*function pointer*/void* field5;
	float field6;
} SCD_Struct_PO96;

typedef struct SpringSolver<POP::Vector4<double> >* SpringSolver<POP::Vector4<double> >Ref;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> > > {
	unsigned long __first_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> > >;

typedef struct _list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> {
	__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> __prev_;
	__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> __next_;
} list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *>;

typedef struct list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > > {
	list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> __end_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> > > __size_alloc_;
} list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > >;

typedef struct {
	_ftsent field1;
	_ftsent field2;
	_ftsent field3;
	int field4;
	char* field5;
	int field6;
	int field7;
	int( field8;
	/*function pointer*/void* field9;
	= field10;
	/*function pointer*/void* field11;
	id field12;
	/*function pointer*/void*) field13;
	int field14;
} SCD_Struct_IG101;

typedef struct {
	unsigned char field1;
	unsigned char field2;
} SCD_Struct_IG102;

typedef struct UIOffset {
	float horizontal;
	float vertical;
} UIOffset;

typedef struct {
	double x;
	double y;
	double z;
} SCD_Struct_IG104;

typedef struct IGAssetSelectionMechanic {
	unsigned options;
	unsigned maxSelectionCount;
} IGAssetSelectionMechanic;

typedef struct IGCarouselMetrics {
	float sectionHeaderHeight;
	CGSize itemSize;
	UIEdgeInsets sectionInset;
	float minimumLineSpacing;
} IGCarouselMetrics;

typedef struct IGPagingFocusOffsets {
	int before;
	int after;
} IGPagingFocusOffsets;

typedef struct _compressed_pair<IGSectionEntry *, std::__1::allocator<IGSectionEntry> > {
	IGSectionEntry __first_;
} compressed_pair<IGSectionEntry *, std::__1::allocator<IGSectionEntry> >;

typedef struct vector<IGSectionEntry, std::__1::allocator<IGSectionEntry> > {
	IGSectionEntry __begin_;
	IGSectionEntry __end_;
	compressed_pair<IGSectionEntry *, std::__1::allocator<IGSectionEntry> > __end_cap_;
} vector<IGSectionEntry, std::__1::allocator<IGSectionEntry> >;

typedef struct _compressed_pair<int *, std::__1::allocator<int> > {
	int __first_;
} compressed_pair<int *, std::__1::allocator<int> >;

typedef struct vector<int, std::__1::allocator<int> > {
	int __begin_;
	int __end_;
	compressed_pair<int *, std::__1::allocator<int> > __end_cap_;
} vector<int, std::__1::allocator<int> >;

typedef struct _compressed_pair<std::__1::vector<float, std::__1::allocator<float> > *, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {
	vector<float, std::__1::allocator<float> > __first_;
} compressed_pair<std::__1::vector<float, std::__1::allocator<float> > *, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >;

typedef struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {
	vector<float, std::__1::allocator<float> > __begin_;
	vector<float, std::__1::allocator<float> > __end_;
	compressed_pair<std::__1::vector<float, std::__1::allocator<float> > *, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > __end_cap_;
} vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >;

typedef struct _compressed_pair<float *, std::__1::allocator<float> > {
	float __first_;
} compressed_pair<float *, std::__1::allocator<float> >;

typedef struct vector<float, std::__1::allocator<float> > {
	float __begin_;
	float __end_;
	compressed_pair<float *, std::__1::allocator<float> > __end_cap_;
} vector<float, std::__1::allocator<float> >;

typedef struct {
	double latitude;
	double longitude;
} SCD_Struct_IG116;

typedef struct {
	int numRows;
	int numSquaresPerRow;
	int squareDimension;
} SCD_Struct_IG117;

typedef struct {
	SCD_Struct_IG116 center;
	SCD_Struct_IG116 span;
} SCD_Struct_IG118;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> > {
	unsigned long __first_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::hash<std::__1::basic_string<char> >, true> > {
	unsigned long __first_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::hash<std::__1::basic_string<char> >, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::equal_to<std::__1::basic_string<char> >, true> > {
	float __first_;
} compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::equal_to<std::__1::basic_string<char> >, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> {
	__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> __first_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> > > {
	__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> __first_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> > __second_;
} compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> > > {
	compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, double> > > {
	unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::hash<std::__1::basic_string<char> >, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::equal_to<std::__1::basic_string<char> >, true> > __p3_;
} hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, double> > >;

typedef struct unordered_map<std::__1::basic_string<char>, double, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > > {
	hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, double>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, double> > > __table_;
} unordered_map<std::__1::basic_string<char>, double, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > >;

typedef struct _compressed_pair<unsigned long, std::__1::less<std::__1::pair<double, std::__1::basic_string<char> > > > {
	unsigned long __first_;
} compressed_pair<unsigned long, std::__1::less<std::__1::pair<double, std::__1::basic_string<char> > > >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<double, std::__1::basic_string<char> >, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<double, std::__1::basic_string<char> >, void *> > >;

typedef struct _tree<std::__1::pair<double, std::__1::basic_string<char> >, std::__1::less<std::__1::pair<double, std::__1::basic_string<char> > >, std::__1::allocator<std::__1::pair<double, std::__1::basic_string<char> > > > {
	__tree_node<std::__1::pair<double, std::__1::basic_string<char> >, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<double, std::__1::basic_string<char> >, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::less<std::__1::pair<double, std::__1::basic_string<char> > > > __pair3_;
} tree<std::__1::pair<double, std::__1::basic_string<char> >, std::__1::less<std::__1::pair<double, std::__1::basic_string<char> > >, std::__1::allocator<std::__1::pair<double, std::__1::basic_string<char> > > >;

typedef struct set<std::__1::pair<double, std::__1::basic_string<char> >, std::__1::less<std::__1::pair<double, std::__1::basic_string<char> > >, std::__1::allocator<std::__1::pair<double, std::__1::basic_string<char> > > > {
	tree<std::__1::pair<double, std::__1::basic_string<char> >, std::__1::less<std::__1::pair<double, std::__1::basic_string<char> > >, std::__1::allocator<std::__1::pair<double, std::__1::basic_string<char> > > > __tree_;
} set<std::__1::pair<double, std::__1::basic_string<char> >, std::__1::less<std::__1::pair<double, std::__1::basic_string<char> > >, std::__1::allocator<std::__1::pair<double, std::__1::basic_string<char> > > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> *> > {
	unsigned long __first_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<Class<IGUserSessionObject>, std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, std::__1::hash<Class<IGUserSessionObject> >, true> > {
	unsigned long __first_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<Class<IGUserSessionObject>, std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, std::__1::hash<Class<IGUserSessionObject> >, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<Class<IGUserSessionObject>, std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, std::__1::equal_to<Class<IGUserSessionObject> >, true> > {
	float __first_;
} compressed_pair<float, std::__1::__unordered_map_equal<Class<IGUserSessionObject>, std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, std::__1::equal_to<Class<IGUserSessionObject> >, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> *> {
	__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> *> __first_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> *> > > {
	__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> __first_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> *> > __second_;
} compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> *> > > {
	compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, std::__1::__unordered_map_hasher<Class<IGUserSessionObject>, std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, std::__1::hash<Class<IGUserSessionObject> >, true>, std::__1::__unordered_map_equal<Class<IGUserSessionObject>, std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, std::__1::equal_to<Class<IGUserSessionObject> >, true>, std::__1::allocator<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> > > > {
	unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<Class<IGUserSessionObject>, std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, std::__1::hash<Class<IGUserSessionObject> >, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<Class<IGUserSessionObject>, std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, std::__1::equal_to<Class<IGUserSessionObject> >, true> > __p3_;
} hash_table<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, std::__1::__unordered_map_hasher<Class<IGUserSessionObject>, std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, std::__1::hash<Class<IGUserSessionObject> >, true>, std::__1::__unordered_map_equal<Class<IGUserSessionObject>, std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, std::__1::equal_to<Class<IGUserSessionObject> >, true>, std::__1::allocator<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> > > >;

typedef struct unordered_map<Class<IGUserSessionObject>, std::__1::shared_future<Value>, std::__1::hash<Class<IGUserSessionObject> >, std::__1::equal_to<Class<IGUserSessionObject> >, std::__1::allocator<std::__1::pair<const Class<IGUserSessionObject>, std::__1::shared_future<Value> > > > {
	hash_table<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, std::__1::__unordered_map_hasher<Class<IGUserSessionObject>, std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, std::__1::hash<Class<IGUserSessionObject> >, true>, std::__1::__unordered_map_equal<Class<IGUserSessionObject>, std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> >, std::__1::equal_to<Class<IGUserSessionObject> >, true>, std::__1::allocator<std::__1::__hash_value_type<Class<IGUserSessionObject>, std::__1::shared_future<Value> > > > __table_;
} unordered_map<Class<IGUserSessionObject>, std::__1::shared_future<Value>, std::__1::hash<Class<IGUserSessionObject> >, std::__1::equal_to<Class<IGUserSessionObject> >, std::__1::allocator<std::__1::pair<const Class<IGUserSessionObject>, std::__1::shared_future<Value> > > >;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct __CFArray* CFArrayRef;

typedef struct IGRange {
	float location;
	float length;
} IGRange;

