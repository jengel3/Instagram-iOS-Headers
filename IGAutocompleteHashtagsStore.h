
#import <Instagram/IGAutocompleteAbstractStore.h>
#import <Instagram/IGAutocompleteAbstractStoreProtocol.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface IGAutocompleteHashtagsStore : IGAutocompleteAbstractStore <IGAutocompleteAbstractStoreProtocol> {

	NSMutableDictionary* _hashtagExpirations;
	NSMutableArray* _allHashtags;
	NSMutableArray* _recentHashtags;

}

@property (nonatomic,retain) NSMutableArray * allHashtags;                 //@synthesize allHashtags=_allHashtags - In the implementation block
@property (nonatomic,retain) NSMutableArray * recentHashtags;              //@synthesize recentHashtags=_recentHashtags - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)archiveURLForUserPK:(id)arg1 storeKey:(id)arg2 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(id)archiveURLForKey:(id)arg1 ;
-(void)performMigrationFromSessionDefaultsIfNecessary;
-(id)hashtagArrayFromTagNameArray:(id)arg1 ;
-(id)hashtagsInString:(id)arg1 ;
-(int)indexOfHashtag:(id)arg1 inArray:(id)arg2 ;
-(void)setExpiresForHashtag:(id)arg1 ;
-(void)removeExpiredHashtags;
-(void)setAllHashtags:(NSMutableArray *)arg1 ;
-(void)setRecentHashtags:(NSMutableArray *)arg1 ;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 blendedSearchRecentItemsOrderStore:(id)arg3 ;
-(id)regexPattern;
-(void)addHashtagsFromText:(id)arg1 addToRecent:(char)arg2 ;
-(void)addHashtag:(id)arg1 addToRecent:(char)arg2 ;
-(NSMutableArray *)recentHashtags;
-(NSMutableArray *)allHashtags;
-(void)archive;
-(void)clearHistory;
@end

