

@class NSURL, NSString;

@interface BFAppLinkTarget : NSObject {

	NSURL* _URL;
	NSString* _appStoreId;
	NSString* _appName;

}

@property (nonatomic,retain) NSURL * URL;                      //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * appStoreId;              //@synthesize appStoreId=_appStoreId - In the implementation block
@property (nonatomic,copy) NSString * appName;                 //@synthesize appName=_appName - In the implementation block
+(id)appLinkTargetWithURL:(id)arg1 appStoreId:(id)arg2 appName:(id)arg3 ;
-(void)setAppStoreId:(NSString *)arg1 ;
-(NSString *)appStoreId;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(NSString *)appName;
@end

