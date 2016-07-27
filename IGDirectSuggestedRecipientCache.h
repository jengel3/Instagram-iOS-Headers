

@class NSString;

@interface IGDirectSuggestedRecipientCache : NSObject {

	NSString* _userPk;

}

@property (nonatomic,copy,readonly) NSString * userPk;              //@synthesize userPk=_userPk - In the implementation block
+(id)cacheFileURLForUserPk:(id)arg1 ;
+(void)clearCacheForUserPK:(id)arg1 ;
-(id)cacheFileURL;
-(NSString *)userPk;
-(id)initWithUserPk:(id)arg1 ;
-(void)archiveRecipients:(id)arg1 ;
-(void)unarchiveRecipientsWithCompletion:(/*^block*/id)arg1 ;
@end

