

@protocol UITabBarDelegate <NSObject>
@optional
-(void)tabBar:(id)arg1 didSelectItem:(id)arg2;
-(void)tabBar:(id)arg1 willBeginCustomizingItems:(id)arg2;
-(void)tabBar:(id)arg1 didBeginCustomizingItems:(id)arg2;
-(void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(char)arg3;
-(void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(char)arg3;

@end

