

@protocol IGLocationSuggestionDelegate <NSObject>
@required
-(void)locationSuggestionCell:(id)arg1 stateChanged:(int)arg2;
-(void)locationSuggestionCelldidClearLocation:(id)arg1;
-(void)locationSuggestionCell:(id)arg1 didFinishWithLocation:(id)arg2;
-(void)locationSuggestionCell:(id)arg1 didSelectIndex:(unsigned)arg2 locations:(id)arg3;
-(void)locationSuggestionCell:(id)arg1 didLoadLocations:(id)arg2;

@end

