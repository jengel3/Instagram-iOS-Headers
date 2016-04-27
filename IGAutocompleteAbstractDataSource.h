
#import <Instagram/IGAutocompleteAlmostAbstractDataSource.h>

@class NSString, NSArray;

@interface IGAutocompleteAbstractDataSource : IGAutocompleteAlmostAbstractDataSource {

	char _shouldReverseSort;
	int _defaultSet;
	NSString* _query;
	NSArray* _filteredStrings;

}

@property (assign,nonatomic) int defaultSet;                         //@synthesize defaultSet=_defaultSet - In the implementation block
@property (assign,nonatomic) char shouldReverseSort;                 //@synthesize shouldReverseSort=_shouldReverseSort - In the implementation block
@property (nonatomic,copy) NSString * query;                         //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSArray * filteredStrings;              //@synthesize filteredStrings=_filteredStrings - In the implementation block
-(void)setFilteredStrings:(NSArray *)arg1 ;
-(int)sortedOrder:(int)arg1 ;
-(int)defaultSet;
-(void)setDefaultSet:(int)arg1 ;
-(char)shouldReverseSort;
-(void)setShouldReverseSort:(char)arg1 ;
-(NSArray *)filteredStrings;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
@end

