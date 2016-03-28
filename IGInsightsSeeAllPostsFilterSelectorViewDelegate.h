

@protocol IGInsightsSeeAllPostsFilterSelectorViewDelegate <NSObject>
@required
-(void)didSelectMediaTypeOnSelectorView:(id)arg1 AtIndex:(unsigned)arg2;
-(void)didSelectDataOrderingOnSelectorView:(id)arg1 AtIndex:(unsigned)arg2;
-(void)didSelectTimeframeOnSelectorView:(id)arg1 AtIndex:(unsigned)arg2;
-(void)didTapSubmitButton;

@end

