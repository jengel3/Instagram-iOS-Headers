

@protocol FBSDKSharingButton <NSObject>
@property (nonatomic,copy) id<FBSDKSharingContent> shareContent; 
@required
-(id<FBSDKSharingContent>)shareContent;
-(void)setShareContent:(id)arg1;

@end

