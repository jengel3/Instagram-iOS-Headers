

@class NSRegularExpression, NSString, IGNonCurrentUserDefaults, IGBlendedSearchRecentItemsOrderStore;

@interface IGAutocompleteAbstractStore : NSObject {

	NSRegularExpression* _regex;
	NSString* _userSessionPK;
	IGNonCurrentUserDefaults* _sessionUserDefaults;
	IGBlendedSearchRecentItemsOrderStore* _blendedSearchRecentItemsOrderStore;

}

@property (nonatomic,retain) NSRegularExpression * regex;                                                            //@synthesize regex=_regex - In the implementation block
@property (nonatomic,retain) NSString * userSessionPK;                                                               //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;                                         //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,retain) IGBlendedSearchRecentItemsOrderStore * blendedSearchRecentItemsOrderStore;              //@synthesize blendedSearchRecentItemsOrderStore=_blendedSearchRecentItemsOrderStore - In the implementation block
+(id)createAutocompleteCacheDirectory;
+(void)clearAutocompleteCacheDirectory;
+(id)autocompleteCacheDirectory;
-(NSString *)userSessionPK;
-(void)setBlendedSearchRecentItemsOrderStore:(IGBlendedSearchRecentItemsOrderStore *)arg1 ;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 blendedSearchRecentItemsOrderStore:(id)arg3 ;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(IGBlendedSearchRecentItemsOrderStore *)blendedSearchRecentItemsOrderStore;
-(id)regexPattern;
-(void)setUserSessionPK:(NSString *)arg1 ;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(void)archive;
-(void)dealloc;
-(NSRegularExpression *)regex;
-(void)setRegex:(NSRegularExpression *)arg1 ;
@end

