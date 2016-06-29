
#import <Instagram/IGAutocompleteDataSource.h>

@class NSArray, NSSet;

@interface IGAutocompleteAlmostAbstractDataSource : IGAutocompleteDataSource {

	NSArray* _filteredResults;
	NSSet* _excludes;
	NSArray* _unfilteredResults;

}

@property (nonatomic,readonly) NSArray * filteredResults;              //@synthesize filteredResults=_filteredResults - In the implementation block
@property (nonatomic,retain) NSSet * excludes;                         //@synthesize excludes=_excludes - In the implementation block
@property (nonatomic,retain) NSArray * unfilteredResults;              //@synthesize unfilteredResults=_unfilteredResults - In the implementation block
-(id)allResults;
-(id)resultForRow:(int)arg1 ;
-(NSArray *)filteredResults;
-(id)arrayWithoutExcludes:(id)arg1 ;
-(NSArray *)unfilteredResults;
-(void)setUnfilteredResults:(NSArray *)arg1 ;
-(NSSet *)excludes;
-(void)setExcludes:(NSSet *)arg1 ;
-(unsigned)numberOfResults;
@end

