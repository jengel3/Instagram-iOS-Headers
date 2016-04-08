
typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_IG0;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

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
} SCD_Struct_IG2;

typedef struct {
	unsigned long field1;
	id field2;
	unsigned long field3;
	unsigned long field4[5];
} SCD_Struct_IG3;

typedef struct {
	unsigned char field1;
	unsigned char field2;
} SCD_Struct_IG4;

typedef struct _NSZone* NSZoneRef;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct UIOffset {
	float horizontal;
	float vertical;
} UIOffset;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct {
	double x;
	double y;
	double z;
} SCD_Struct_IG11;

typedef struct __CVBuffer* CVBufferRef;

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
} SCD_Struct_IG13;

typedef union GLKMatrix4 {
	SCD_Struct_IG13 field1;
	float m[16];
} GLKMatrix4;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

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

typedef struct CGContext* CGContextRef;

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
	double field1;
	double field2;
} SCD_Struct_IG25;

typedef struct {
	double latitude;
	double longitude;
} SCD_Struct_IG26;

typedef struct {
	int numRows;
	int numSquaresPerRow;
	int squareDimension;
} SCD_Struct_IG27;

typedef struct {
	SCD_Struct_IG26 center;
	SCD_Struct_IG26 span;
} SCD_Struct_IG28;

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

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_IG44;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct {
	SCD_Struct_IG44 start;
	SCD_Struct_IG44 duration;
} SCD_Struct_IG46;

typedef struct __CFArray* CFArrayRef;

typedef struct CGImage* CGImageRef;

typedef struct IGRange {
	float location;
	float length;
} IGRange;

typedef struct __CFHTTPMessage* CFHTTPMessageRef;

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

typedef struct {
	CGSize field1;
	int field2;
	long long field3;
	char field4;
	char field5;
	char field6;
} SCD_Struct_IG54;

typedef struct {
	int field1;
	void field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
} SCD_Struct_IG55;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFString* CFStringRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct CGPath* CGPathRef;

typedef struct __CTRunDelegate* CTRunDelegateRef;

typedef struct __CVOpenGLESTextureCache* CVOpenGLESTextureCacheRef;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_IG63;

typedef union GLKVector3 {
	SCD_Struct_IG63 field1;
	SCD_Struct_IG63 field2;
	SCD_Struct_IG63 field3;
	float v[3];
} GLKVector3;

typedef union GLKVector2 {
	CGPoint field1;
	CGPoint field2;
	float v[2];
} GLKVector2;

typedef struct IGDKStats {
	double milliseconds;
	int fromCount;
	int toCount;
} IGDKStats;

typedef struct {
	char field1;
	unsigned char field2;
	char field3;
	unsigned long long field4;
} SCD_Struct_SR67;

typedef struct {
	double fieldOfView;
	double aspectRatio;
	double gyroDelay;
	double shutterSpeed;
	char gyroOrientation[3];
} SCD_Struct_IG68;

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

typedef struct FBAnimationPerformanceTrackerConfig {
	int smallDropEventFrameNumber;
	int largeDropEventFrameNumber;
	int maxFrameDropAccount;
	char reportStackTraces;
} FBAnimationPerformanceTrackerConfig;

typedef struct {
	unsigned _exponent : 8;
	unsigned _length : 4;
	unsigned _isNegative : 1;
	unsigned _isCompact : 1;
	unsigned _reserved : 18;
	unsigned short _mantissa[8];
} SCD_Struct_CP80;

typedef struct CGColor* CGColorRef;

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

typedef struct CGLayer* CGLayerRef;

typedef struct __SecRandom* SecRandomRef;

typedef struct {
	id field1;
	id field2;
	/*function pointer*/void* field3;
	id field4;
	/*function pointer*/void* field5;
	float field6;
} SCD_Struct_PO90;

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

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFRunLoopObserver* CFRunLoopObserverRef;

