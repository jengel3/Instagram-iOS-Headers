

@protocol IGNavigationControllerDelegate <NSObject>
@required
-(void)navigationController:(id)arg1 didPopViewController:(id)arg2 animated:(char)arg3;
-(void)navigationController:(id)arg1 willNavigateToViewController:(id)arg2;
-(void)navigationController:(id)arg1 didNavigateToViewController:(id)arg2 animated:(char)arg3;

@end

