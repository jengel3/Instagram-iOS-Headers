

@class NSString;

@interface FBCacheEntityInfo : NSObject {

	NSString* _uuid;
	NSString* _key;
	double _accessTime;
	unsigned _fileSize;
	char _dirty;

}

@property (copy,readonly) NSString * key;               //@synthesize key=_key - In the implementation block
@property (copy,readonly) NSString * uuid;              //@synthesize uuid=_uuid - In the implementation block
@property (readonly) double accessTime;                 //@synthesize accessTime=_accessTime - In the implementation block
@property (readonly) unsigned fileSize;                 //@synthesize fileSize=_fileSize - In the implementation block
@property (getter=isDirty) char dirty;                  //@synthesize dirty=_dirty - In the implementation block
-(void)registerAccess;
-(id)initWithKey:(id)arg1 uuid:(id)arg2 accessTime:(double)arg3 fileSize:(unsigned)arg4 ;
-(double)accessTime;
-(void)dealloc;
-(NSString *)key;
-(NSString *)uuid;
-(void)setDirty:(char)arg1 ;
-(unsigned)fileSize;
-(char)isDirty;
@end

