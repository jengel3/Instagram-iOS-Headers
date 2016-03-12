

@class NSArray, NSString, NSMutableDictionary;

@interface IGAutocompleteDataSourceStore : NSObject {

	NSArray* _currentResults;
	NSString* _lastQuery;
	NSMutableDictionary* _pastResults;

}

@property (nonatomic,retain) NSArray * currentResults;                       //@synthesize currentResults=_currentResults - In the implementation block
@property (nonatomic,copy) NSString * lastQuery;                             //@synthesize lastQuery=_lastQuery - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pastResults;              //@synthesize pastResults=_pastResults - In the implementation block
-(void)setCurrentResults:(NSArray *)arg1 ;
-(NSMutableDictionary *)pastResults;
-(void)currentResults:(id)arg1 forQuery:(id)arg2 ;
-(void)setPastResults:(NSMutableDictionary *)arg1 ;
-(id)init;
-(NSArray *)currentResults;
-(NSString *)lastQuery;
-(void)setLastQuery:(NSString *)arg1 ;
-(void)clearResults;
@end

