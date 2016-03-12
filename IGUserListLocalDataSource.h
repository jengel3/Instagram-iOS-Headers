
#import <Instagram/IGAutocompleteAbstractDataSource.h>
#import <Instagram/IGAutocompleteDataSource.h>

@class NSMutableDictionary, NSDictionary, NSString;

@interface IGUserListLocalDataSource : IGAutocompleteAbstractDataSource <IGAutocompleteDataSource> {

	char _excludesCurrentUser;
	NSMutableDictionary* _additionalUsers;
	NSDictionary* _additionalUserSearchStrings;

}

@property (assign,nonatomic) char excludesCurrentUser;                                //@synthesize excludesCurrentUser=_excludesCurrentUser - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * additionalUsers;                   //@synthesize additionalUsers=_additionalUsers - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalUserSearchStrings;              //@synthesize additionalUserSearchStrings=_additionalUserSearchStrings - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFilteredResults:(id)arg1 ;
-(void)addUsersForFeedItem:(id)arg1 ;
-(void)filterUsersInSet:(int)arg1 scope:(int)arg2 query:(id)arg3 ;
-(void)setExcludesCurrentUser:(char)arg1 ;
-(void)addUsers:(id)arg1 ;
-(/*^block*/id)usernameComparator;
-(id)searchStringsForCharacter:(id)arg1 ;
-(id)usersForPKs:(id)arg1 fromSet:(int)arg2 ;
-(/*^block*/id)fullComparator:(id)arg1 ;
-(char)excludesCurrentUser;
-(NSMutableDictionary *)additionalUsers;
-(void)setAdditionalUsers:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)additionalUserSearchStrings;
-(void)setAdditionalUserSearchStrings:(NSDictionary *)arg1 ;
@end

