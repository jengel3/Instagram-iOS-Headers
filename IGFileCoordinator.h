

@class NSFileManager, NSURL;

@interface IGFileCoordinator : NSObject {

	NSFileManager* _fileManager;
	NSURL* _filePathURL;

}

@property (nonatomic,readonly) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,readonly) NSURL * filePathURL;                      //@synthesize filePathURL=_filePathURL - In the implementation block
+(char)removeFileAtURL:(id)arg1 withManager:(id)arg2 ;
+(char)removeFileAtURL:(id)arg1 ;
-(id)initWithFileManager:(id)arg1 filePathURL:(id)arg2 ;
-(id)initWithFilePathURL:(id)arg1 ;
-(char)archiveObject:(id)arg1 ;
-(id)unarchiveObject;
-(char)removeFile;
-(NSURL *)filePathURL;
-(NSFileManager *)fileManager;
@end

