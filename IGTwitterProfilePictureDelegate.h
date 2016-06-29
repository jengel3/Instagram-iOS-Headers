

@protocol IGTwitterProfilePictureDelegate <NSObject>
@optional
-(void)imageTicketDidFinishWithURL:(id)arg1;

@required
-(void)imageTicketDidFinishWithData:(id)arg1;
-(void)imageTicketDidFail;

@end

