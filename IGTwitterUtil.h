

@interface IGTwitterUtil : NSObject
+(void)tweetWithSystemTwitterAccountPhotoLink:(id)arg1 username:(id)arg2 mediaType:(int)arg3 viewController:(id)arg4 ;
+(char)hasSystemTwitterAccount;
+(void)loadProfilePictureForACAccount:(id)arg1 delegate:(id)arg2 ;
+(void)loadProfilePictureFromOAuthViaSystem:(id)arg1 ;
+(char)canLoadProfilePicture;
+(void)loadProfilePictureWithDelegate:(id)arg1 ;
+(void)loadProfilePictureWithPlainOAuth:(id)arg1 ;
+(id)accountStore;
+(void)removeHandler:(id)arg1 ;
@end

