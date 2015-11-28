

@protocol IGShareManagerDelegate <NSObject>
@required
-(void)shareManagerWantsModeExit;
-(void)shareManagerWantsModeWithTitle:(id)arg1 completion:(/*^block*/id)arg2;

@end

