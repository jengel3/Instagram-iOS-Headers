

@protocol FBSDKSharing <NSObject>
@property (assign,nonatomic,__weak) id<FBSDKSharingDelegate> delegate; 
@property (nonatomic,copy) id<FBSDKSharingContent> shareContent; 
@property (assign,nonatomic) char shouldFailOnDataError; 
@required
-(id<FBSDKSharingContent>)shareContent;
-(void)setShareContent:(id)arg1;
-(char)shouldFailOnDataError;
-(void)setShouldFailOnDataError:(char)arg1;
-(char)validateWithError:(id*)arg1;
-(void)setDelegate:(id)arg1;
-(id<FBSDKSharingDelegate>)delegate;

@end

