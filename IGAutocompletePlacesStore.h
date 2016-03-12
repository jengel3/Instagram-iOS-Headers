
#import <Instagram/IGAutocompleteAbstractStore.h>
#import <Instagram/IGAutocompleteAbstractStoreProtocol.h>

@class NSMutableOrderedSet, NSArray, NSString;

@interface IGAutocompletePlacesStore : IGAutocompleteAbstractStore <IGAutocompleteAbstractStoreProtocol> {

	NSMutableOrderedSet* _places;

}

@property (nonatomic,readonly) NSArray * allPlaces; 
@property (nonatomic,readonly) NSArray * recentPlaces; 
@property (nonatomic,readonly) NSMutableOrderedSet * places;              //@synthesize places=_places - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)archiveURLForUserPK:(id)arg1 ;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 blendedSearchRecentItemsOrderStore:(id)arg3 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(id)archiveURL;
-(NSArray *)allPlaces;
-(void)addPlaceToRecent:(id)arg1 ;
-(NSArray *)recentPlaces;
-(void)archive;
-(void)clearHistory;
-(NSMutableOrderedSet *)places;
@end

