

@protocol IGAutocompleteAsyncDataSource <IGAutocompleteDataSource>
@property (assign,nonatomic,__weak) id<IGAutocompleteAsyncDataSourceDelegate> delegate; 
@required
-(char)isSearching;
-(void)setDelegate:(id)arg1;
-(id<IGAutocompleteAsyncDataSourceDelegate>)delegate;

@end

