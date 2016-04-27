

@class NSUserDefaults;

@interface IGSharedStorage : NSObject {

	NSUserDefaults* _sharedDefaults;

}

@property (nonatomic,retain) NSUserDefaults * sharedDefaults;              //@synthesize sharedDefaults=_sharedDefaults - In the implementation block
+(id)sharedInstance;
-(id)storageURLForDirectory:(id)arg1 ;
-(void)setSharingEnabled;
-(id)breakpadStorageURL;
-(id)layoutStorageURL;
-(void)setSharedDefaults:(NSUserDefaults *)arg1 ;
-(id)init;
-(NSUserDefaults *)sharedDefaults;
-(id)groupIdentifier;
-(char)isSharingEnabled;
@end

