

@interface IGUsertagHelper : NSObject
+(id)mediaIdListForItems:(id)arg1 ;
+(void)setPhotosOfYouPublicForUser:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
+(void)setUsertagVisible:(char)arg1 forItems:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
+(void)untagCurrentUserForItem:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
@end

