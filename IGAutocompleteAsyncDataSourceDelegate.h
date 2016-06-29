

@protocol IGAutocompleteAsyncDataSourceDelegate <NSObject>
@required
-(void)autocompleteDataSourceDidStartLoading:(id)arg1;
-(void)autocompleteDataSourceDidFinishLoading:(id)arg1;
-(void)autocompleteDataSourceDidFailLoad:(id)arg1;

@end

