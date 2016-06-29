
#import <Instagram/IGAutocompleteAbstractDataSource.h>

@class NSMutableDictionary, NSDictionary;

@interface IGUserListLocalDataSource : IGAutocompleteAbstractDataSource {

	char _excludesCurrentUser;
	NSMutableDictionary* _additionalUsers;
	NSDictionary* _additionalUserSearchStrings;

}

@property (nonatomic,retain) NSMutableDictionary * additionalUsers;                   //@synthesize additionalUsers=_additionalUsers - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalUserSearchStrings;              //@synthesize additionalUserSearchStrings=_additionalUserSearchStrings - In the implementation block
@property (assign,nonatomic) char excludesCurrentUser;                                //@synthesize excludesCurrentUser=_excludesCurrentUser - In the implementation block
-(void)setUnfilteredResults:(id)arg1 ;
-(void)addUsersForFeedItem:(id)arg1 ;
-(void)filterUsersInSet:(int)arg1 scope:(int)arg2 query:(id)arg3 ;
-(void)addUsers:(id)arg1 ;
-(/*^block*/id)usernameComparator;
-(id)searchStringsForCharacter:(id)arg1 ;
-(id)usersForPKs:(id)arg1 fromSet:(int)arg2 ;
-(/*^block*/id)fullComparator:(id)arg1 ;
-(NSMutableDictionary *)additionalUsers;
-(void)setAdditionalUsers:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)additionalUserSearchStrings;
-(void)setAdditionalUserSearchStrings:(NSDictionary *)arg1 ;
-(char)excludesCurrentUser;
-(void)setExcludesCurrentUser:(char)arg1 ;
@end

