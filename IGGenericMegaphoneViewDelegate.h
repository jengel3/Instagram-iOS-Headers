

@protocol IGGenericMegaphoneViewDelegate <NSObject>
@optional
-(void)megaphone:(id)arg1 didTapButton:(id)arg2;

@required
-(void)megaphoneDidDismiss:(id)arg1;
-(void)megaphone:(id)arg1 didOpenURL:(id)arg2;

@end

