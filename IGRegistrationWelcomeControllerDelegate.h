

@protocol IGRegistrationWelcomeControllerDelegate <IGRegistrationWelcomeControllerBaseDelegate>
@required
-(void)welcomeController:(id)arg1 wantsToProceedWithEmail:(id)arg2 usernameSuggestions:(id)arg3;
-(void)welcomeController:(id)arg1 wantsToProceedWithConflictedEmail:(id)arg2;

@end

