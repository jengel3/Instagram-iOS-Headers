/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:37 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IGListCollectionContext <NSObject>
@property (nonatomic,readonly) CGSize containerSize; 
@required
-(id)dequeReusableCellOfClass:(Class)arg1 forIndexPath:(id)arg2;
-(void)reloadItemsInListItemController:(id)arg1 atIndexes:(id)arg2;
-(id)dequeReusableSupplementaryViewOfKind:(id)arg1 class:(Class)arg2 forIndexPath:(id)arg3;
-(void)reloadListItemController:(id)arg1;
-(unsigned)sectionForListItemController:(id)arg1;
-(void)insertItemsInListItemController:(id)arg1 atIndexes:(id)arg2;
-(void)deleteItemsInListItemController:(id)arg1 atIndexes:(id)arg2;
-(id)indexPathForCell:(id)arg1;
-(id)cellForItemAtIndexPath:(id)arg1;
-(void)deselectItemAtIndexPath:(id)arg1 animated:(char)arg2;
-(CGSize)containerSize;

@end
