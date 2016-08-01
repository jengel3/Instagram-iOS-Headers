

@protocol IGDirectThreadInfoDelegate <NSObject>
@required
-(void)threadInfoViewController:(id)arg1 didHideThread:(id)arg2;
-(void)threadInfoViewController:(id)arg1 didRenameThreadWithID:(id)arg2 toName:(id)arg3;
-(void)threadInfoViewController:(id)arg1 didMuteThreadWithId:(id)arg2 muted:(char)arg3;

@end

