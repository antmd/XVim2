//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class NSColor, NSTrackingArea;

@interface IDECoverageReportTableRowView : NSTableRowView
{
    BOOL _mouseInside;
    NSTrackingArea *_trackingArea;
    long long _coverageBarColumnIndex;
    id _item;
    NSColor *_separatorColor;
}

@property(retain) NSColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(retain) id item; // @synthesize item=_item;
@property long long coverageBarColumnIndex; // @synthesize coverageBarColumnIndex=_coverageBarColumnIndex;
- (void).cxx_destruct;
- (void)drawSeparatorInRect:(struct CGRect)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)testTableCellView;
- (void)updateTrackingAreas;
- (void)ensureTrackingArea;
- (BOOL)mouseInside;
- (void)setMouseInside:(BOOL)arg1;

@end

