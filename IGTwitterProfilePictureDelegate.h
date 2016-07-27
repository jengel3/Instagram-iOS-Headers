

@protocol IGTwitterProfilePictureDelegate <NSObject>
@optional
-(void)imageTicketDidFinishWithURL:(id)arg1;

@required
-(void)imageTicketDidFail;
-(void)imageTicketDidFinishWithData:(id)arg1;

@end

