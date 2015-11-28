

@protocol IGAutocompleteAsyncDataSourceDelegate <NSObject>
@optional
-(void)autocompleteDataSourceDidStartLoading:(id)arg1;
-(void)autocompleteDataSourceDidFailLoad:(id)arg1;

@required
-(void)autocompleteDataSourceDidFinishLoading:(id)arg1;

@end

