
#import <Instagram/IGAutocompleteNetworkDataSource.h>

@interface IGPlacesAutocompleteNetworkDataSource : IGAutocompleteNetworkDataSource
-(id)localSuggestionsForQueryString:(id)arg1 numRequested:(int)arg2 ;
-(id)requestForQueryString:(id)arg1 rankToken:(id)arg2 additionalParams:(id)arg3 ;
-(id)parseServerResponse:(id)arg1 ;
@end

