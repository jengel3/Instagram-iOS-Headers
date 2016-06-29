

#import <Instagram/Instagram-Structs.h>
@interface IGListWorkingRangeHandler : NSObject {

	unordered_set<_IGListWorkingRangeHandlerIndexPath, _IGListWorkingRangeHandlerIndexPathHash, std::__1::equal_to<_IGListWorkingRangeHandlerIndexPath>, std::__1::allocator<_IGListWorkingRangeHandlerIndexPath> >* _visibleSectionIndices;
	unordered_set<_IGListWorkingRangeHandlerItemControllerWrapper, _IGListWorkingRangeHashID, std::__1::equal_to<_IGListWorkingRangeHandlerItemControllerWrapper>, std::__1::allocator<_IGListWorkingRangeHandlerItemControllerWrapper> >* _workingRangeItemControllers;
	int _workingRangeSize;

}

@property (nonatomic,readonly) int workingRangeSize;              //@synthesize workingRangeSize=_workingRangeSize - In the implementation block
-(void)updateWorkingRangesWithListAdapter:(id)arg1 ;
-(id)initWithWorkingRangeSize:(int)arg1 ;
-(void)willDisplayItemAtIndexPath:(id)arg1 forListAdapter:(id)arg2 ;
-(void)didEndDisplayingItemAtIndexPath:(id)arg1 forListAdapter:(id)arg2 ;
-(int)workingRangeSize;
@end

