

@protocol IGEditorTabBarDelegate <NSObject>
@required
-(void)tabBar:(id)arg1 didSelectTabView:(id)arg2 previousTabView:(id)arg3;
-(char)tabBar:(id)arg1 shouldSelectTabView:(id)arg2;

@end

