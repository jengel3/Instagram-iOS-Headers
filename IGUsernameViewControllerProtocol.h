
@class NSDictionary, NSString;


@protocol IGUsernameViewControllerProtocol <NSObject>
@property (assign,nonatomic) unsigned mode; 
@property (assign,nonatomic) NSDictionary * facebookUserInfo; 
@property (nonatomic,retain) NSString * email; 
@property (assign,nonatomic,__weak) id<IGUsernameViewControllerDelegate> delegate; 
@required
-(void)setFacebookUserInfo:(id)arg1;
-(NSDictionary *)facebookUserInfo;
-(void)setDelegate:(id)arg1;
-(id<IGUsernameViewControllerDelegate>)delegate;
-(void)setMode:(unsigned)arg1;
-(unsigned)mode;
-(NSString *)email;
-(void)setEmail:(id)arg1;

@end

