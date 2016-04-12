
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
-(void)willSwitchUsers;
-(void)willLogOut;
-(id)regexPattern;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 blendedSearchRecentItemsOrderStore:(id)arg3 ;
-(id)hashtagsInString:(id)arg1 ;
-(void)addHashtag:(id)arg1 addToRecent:(char)arg2 ;
-(int)indexOfHashtag:(id)arg1 inArray:(id)arg2 ;
-(void)setExpiresForHashtag:(id)arg1 ;
-(void)removeExpiredHashtags;
-(void)addHashtagsFromText:(id)arg1 addToRecent:(char)arg2 ;
-(NSMutableArray *)allHashtags;
-(void)setAllHashtags:(NSMutableArray *)arg1 ;
-(NSMutableArray *)recentHashtags;
-(void)setRecentHashtags:(NSMutableArray *)arg1 ;
-(void)archive;
-(void)clearHistory;
@end

