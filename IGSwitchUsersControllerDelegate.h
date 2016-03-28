

@protocol IGSwitchUsersControllerDelegate <NSObject>
@required
-(void)switchUsersControllerDidSelectRowWithCurrentUser:(id)arg1;
-(void)switchUsersController:(id)arg1 tableViewDidSelectRowWithUser:(id)arg2;
-(void)switchUsersControllerDidSelectAddAccountRow:(id)arg1;
-(void)switchUsersController:(id)arg1 wantsToUpdateNeedsAttention:(char)arg2;

@end

