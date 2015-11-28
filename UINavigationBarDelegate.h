

@protocol UINavigationBarDelegate <UIBarPositioningDelegate>
@optional
-(char)navigationBar:(id)arg1 shouldPushItem:(id)arg2;
-(void)navigationBar:(id)arg1 didPushItem:(id)arg2;
-(char)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
-(void)navigationBar:(id)arg1 didPopItem:(id)arg2;

@end

