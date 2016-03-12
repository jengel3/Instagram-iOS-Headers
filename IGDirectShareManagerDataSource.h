

@protocol IGDirectShareManagerDataSource <NSObject>
@optional
-(void)manager:(id)arg1 triedToAddFilteredUser:(id)arg2;

@required
-(UIEdgeInsets*)contentInsetsForManager:(id)arg1;
-(id)currentQueryForManager:(id)arg1;
-(id)recipientsForManager:(id)arg1;
-(char)manager:(id)arg1 wantsToSelectUser:(id)arg2;

@end

