

#import <Instagram/Instagram-Structs.h>
@class IGListAdapter;

@interface IGListAdapterScrollingContext : NSObject {

	IGListAdapter* _listAdapter;
	id _savedItem;
	CGPoint _savedOffsetDelta;

}

@property (nonatomic,__weak,readonly) IGListAdapter * listAdapter;              //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,retain) id savedItem;                                      //@synthesize savedItem=_savedItem - In the implementation block
@property (assign,nonatomic) CGPoint savedOffsetDelta;                          //@synthesize savedOffsetDelta=_savedOffsetDelta - In the implementation block
-(IGListAdapter *)listAdapter;
-(id)initWithListAdapter:(id)arg1 ;
-(void)saveScrollStateMostVisibleSection;
-(void)restoreScrollState;
-(void)saveScrollStateForItem:(id)arg1 section:(unsigned)arg2 ;
-(id)savedItem;
-(CGPoint)savedOffsetDelta;
-(void)setSavedItem:(id)arg1 ;
-(void)setSavedOffsetDelta:(CGPoint)arg1 ;
-(void)saveScrollStateForItem:(id)arg1 ;
-(void)reset;
@end

