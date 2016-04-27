
#import <Instagram/IGAutocompleteDataSource.h>

@protocol IGAutocompleteAsyncDataSourceDelegate;
@interface IGAutocompleteAsyncDataSource : IGAutocompleteDataSource {

	id<IGAutocompleteAsyncDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGAutocompleteAsyncDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(char)isSearching;
-(void)setDelegate:(id<IGAutocompleteAsyncDataSourceDelegate>)arg1 ;
-(id<IGAutocompleteAsyncDataSourceDelegate>)delegate;
@end

