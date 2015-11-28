

@class NSFileManager, NSURL;

@interface FBSDKAudioResourceLoader : NSObject {

	NSFileManager* _fileManager;
	NSURL* _fileURL;
	unsigned long _systemSoundID;

}
+(id)name;
+(id)data;
+(unsigned)version;
+(id)sharedLoader;
-(char)loadSound:(id*)arg1 ;
-(id)_fileURL:(id*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)playSound;
@end

