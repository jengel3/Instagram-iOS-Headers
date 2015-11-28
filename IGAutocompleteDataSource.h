

@protocol IGAutocompleteDataSource <NSObject>
@required
-(id)allResults;
-(id)resultForRow:(int)arg1;
-(unsigned)numberOfResults;

@end

