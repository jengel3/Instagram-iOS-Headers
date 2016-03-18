

@protocol IGMegaphonePresenterDelegate
@required
-(void)megaphonePresenterDidDismiss:(id)arg1;
-(void)megaphonePresenter:(id)arg1 pushViewController:(id)arg2;
-(void)megaphonePresenterPopViewController:(id)arg1;
-(void)megaphonePresenter:(id)arg1 presentViewController:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4;
-(void)megaphonePresenter:(id)arg1 handleURL:(id)arg2;

@end

