

@class NSString, NSArray;

@interface IGAutocompleteAbstractDataSource : NSObject {

	char _shouldReverseSort;
	int _defaultSet;
	NSString* _query;
	NSArray* _filteredStrings;
	NSArray* _filteredResults;

}

@property (assign,nonatomic) int defaultSet;                         //@synthesize defaultSet=_defaultSet - In the implementation block
@property (assign,nonatomic) char shouldReverseSort;                 //@synthesize shouldReverseSort=_shouldReverseSort - In the implementation block
@property (nonatomic,copy) NSString * query;                         //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSArray * filteredStrings;              //@synthesize filteredStrings=_filteredStrings - In the implementation block
@property (nonatomic,retain) NSArray * filteredResults;              //@synthesize filteredResults=_filteredResults - In the implementation block
-(void)setFilteredStrings:(NSArray *)arg1 ;
-(int)sortedOrder:(int)arg1 ;
-(id)allResults;
-(id)resultForRow:(int)arg1 ;
-(int)defaultSet;
-(void)setDefaultSet:(int)arg1 ;
-(char)shouldReverseSort;
-(void)setShouldReverseSort:(char)arg1 ;
-(NSArray *)filteredStrings;
-(NSArray *)filteredResults;
-(void)setFilteredResults:(NSArray *)arg1 ;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(unsigned)numberOfResults;
@end

