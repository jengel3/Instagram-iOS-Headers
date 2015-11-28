

@class NSUserDefaults;

@interface IGSharedStorage : NSObject {

	NSUserDefaults* _sharedDefaults;

}

@property (nonatomic,retain) NSUserDefaults * sharedDefaults;              //@synthesize sharedDefaults=_sharedDefaults - In the implementation block
+(id)sharedInstance;
-(id)breakpadStorageURL;
-(id)layoutStorageURL;
-(void)setSharingEnabled;
-(id)storageURLForDirectory:(id)arg1 ;
-(void)setSharedDefaults:(NSUserDefaults *)arg1 ;
-(id)init;
-(NSUserDefaults *)sharedDefaults;
-(id)groupIdentifier;
-(char)isSharingEnabled;
@end

