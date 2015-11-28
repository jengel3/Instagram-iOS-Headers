

@class NSString, NSFileManager;

@interface IGDiskStore : NSObject {

	NSString* _path;
	NSFileManager* _fileManager;

}

@property (nonatomic,copy) NSString * path;                            //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
-(id)pathFromKey:(id)arg1 ;
-(void)dealloc;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(char)containsKey:(id)arg1 ;
-(NSFileManager *)fileManager;
-(void)setFileManager:(NSFileManager *)arg1 ;
@end

