/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:13 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_IG0;

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
} SCD_Struct_IG1;

typedef struct {
	unsigned long field1;
	id field2;
	unsigned long field3;
	unsigned long field4[5];
} SCD_Struct_IG2;

typedef struct {
	unsigned char field1;
	unsigned char field2;
} SCD_Struct_IG3;

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

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

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

typedef struct IGCarouselMetrics {
	float sectionHeaderHeight;
	float padding;
	float headerBottomSpacing;
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

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, float>, std::__1::less<unsigned int>, true> > {
	unsigned long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, float>, std::__1::less<unsigned int>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, float>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, float>, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned int, float>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, float>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, float> > > {
	__tree_node<std::__1::__value_type<unsigned int, float>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, float>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, float>, std::__1::less<unsigned int>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned int, float>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, float>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, float> > >;

typedef struct map<unsigned int, float, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, float> > > {
	tree<std::__1::__value_type<unsigned int, float>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, float>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, float> > > __tree_;
} map<unsigned int, float, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, float> > >;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_IG29;

typedef struct {
	double latitude;
	double longitude;
} SCD_Struct_IG30;

typedef struct {
	int numRows;
	int numSquaresPerRow;
	int squareDimension;
} SCD_Struct_IG31;

typedef struct {
	SCD_Struct_IG30 center;
	SCD_Struct_IG30 span;
} SCD_Struct_IG32;

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
} SCD_Struct_IG47;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct {
	SCD_Struct_IG47 start;
	SCD_Struct_IG47 duration;
} SCD_Struct_IG49;

typedef struct __CFArray* CFArrayRef;

typedef struct CGImage* CGImageRef;

typedef struct {
	int version;
	void info;
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
	/*function pointer*/void* copyDescription;
} SCD_Struct_GC52;

typedef struct __CFReadStream* CFReadStreamRef;

typedef struct __CFWriteStream* CFWriteStreamRef;

typedef struct SSLContext* SSLContextRef;

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
} SCD_Struct_IG60;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFString* CFStringRef;

typedef struct __CTRunDelegate* CTRunDelegateRef;

typedef struct __CVOpenGLESTextureCache* CVOpenGLESTextureCacheRef;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_IG67;

typedef union GLKVector3 {
	SCD_Struct_IG67 field1;
	SCD_Struct_IG67 field2;
	SCD_Struct_IG67 field3;
	float v[3];
} GLKVector3;

typedef union GLKVector2 {
	CGPoint field1;
	CGPoint field2;
	float v[2];
} GLKVector2;

typedef struct {
	char field1;
	unsigned char field2;
	char field3;
	unsigned long long field4;
} SCD_Struct_SR70;

typedef struct {
	double fieldOfView;
	double aspectRatio;
	double gyroDelay;
	double shutterSpeed;
	char gyroOrientation[3];
} SCD_Struct_IG71;

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

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct __SecRandom* SecRandomRef;

typedef struct FBAnimationPerformanceTrackerConfig {
	int smallDropEventFrameNumber;
	int largeDropEventFrameNumber;
	int maxFrameDropAccount;
	char reportStackTraces;
} FBAnimationPerformanceTrackerConfig;

typedef struct {
	id field1;
	id field2;
	/*function pointer*/void* field3;
	id field4;
	/*function pointer*/void* field5;
	float field6;
} SCD_Struct_PO86;

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

